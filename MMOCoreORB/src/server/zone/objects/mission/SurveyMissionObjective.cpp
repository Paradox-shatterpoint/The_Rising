/*
 *	server/zone/objects/mission/SurveyMissionObjective.cpp generated by engine3 IDL compiler 0.60
 */

#include "SurveyMissionObjective.h"

#include "server/zone/objects/mission/MissionObject.h"

#include "server/zone/objects/mission/MissionObserver.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/resource/ResourceSpawn.h"

/*
 *	SurveyMissionObjectiveStub
 */

enum {RPC_FINALIZE__ = 6,RPC_INITIALIZETRANSIENTMEMBERS__,RPC_ACTIVATE__,RPC_ABORT__,RPC_COMPLETE__,RPC_NOTIFYOBSERVEREVENT__MISSIONOBSERVER_INT_OBSERVABLE_MANAGEDOBJECT_LONG_,RPC_SETSPAWNFAMILY__STRING_,RPC_SETMISSIONGIVER__SCENEOBJECT_,RPC_SETEFFICIENCY__INT_};

SurveyMissionObjective::SurveyMissionObjective(MissionObject* mission) : MissionObjective(DummyConstructorParameter::instance()) {
	SurveyMissionObjectiveImplementation* _implementation = new SurveyMissionObjectiveImplementation(mission);
	_impl = _implementation;
	_impl->_setStub(this);
}

SurveyMissionObjective::SurveyMissionObjective(DummyConstructorParameter* param) : MissionObjective(param) {
}

SurveyMissionObjective::~SurveyMissionObjective() {
}



void SurveyMissionObjective::initializeTransientMembers() {
	SurveyMissionObjectiveImplementation* _implementation = static_cast<SurveyMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void SurveyMissionObjective::activate() {
	SurveyMissionObjectiveImplementation* _implementation = static_cast<SurveyMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATE__);

		method.executeWithVoidReturn();
	} else
		_implementation->activate();
}

void SurveyMissionObjective::abort() {
	SurveyMissionObjectiveImplementation* _implementation = static_cast<SurveyMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ABORT__);

		method.executeWithVoidReturn();
	} else
		_implementation->abort();
}

void SurveyMissionObjective::complete() {
	SurveyMissionObjectiveImplementation* _implementation = static_cast<SurveyMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_COMPLETE__);

		method.executeWithVoidReturn();
	} else
		_implementation->complete();
}

int SurveyMissionObjective::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	SurveyMissionObjectiveImplementation* _implementation = static_cast<SurveyMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYOBSERVEREVENT__MISSIONOBSERVER_INT_OBSERVABLE_MANAGEDOBJECT_LONG_);
		method.addObjectParameter(observer);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->notifyObserverEvent(observer, eventType, observable, arg1, arg2);
}

void SurveyMissionObjective::setSpawnFamily(String& spf) {
	SurveyMissionObjectiveImplementation* _implementation = static_cast<SurveyMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSPAWNFAMILY__STRING_);
		method.addAsciiParameter(spf);

		method.executeWithVoidReturn();
	} else
		_implementation->setSpawnFamily(spf);
}

void SurveyMissionObjective::setMissionGiver(SceneObject* object) {
	SurveyMissionObjectiveImplementation* _implementation = static_cast<SurveyMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETMISSIONGIVER__SCENEOBJECT_);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		_implementation->setMissionGiver(object);
}

void SurveyMissionObjective::setEfficiency(unsigned int eff) {
	SurveyMissionObjectiveImplementation* _implementation = static_cast<SurveyMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETEFFICIENCY__INT_);
		method.addUnsignedIntParameter(eff);

		method.executeWithVoidReturn();
	} else
		_implementation->setEfficiency(eff);
}

DistributedObjectServant* SurveyMissionObjective::_getImplementation() {

	_updated = true;
	return _impl;
}

void SurveyMissionObjective::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	SurveyMissionObjectiveImplementation
 */

SurveyMissionObjectiveImplementation::SurveyMissionObjectiveImplementation(DummyConstructorParameter* param) : MissionObjectiveImplementation(param) {
	_initializeImplementation();
}


SurveyMissionObjectiveImplementation::~SurveyMissionObjectiveImplementation() {
	SurveyMissionObjectiveImplementation::finalize();
}


void SurveyMissionObjectiveImplementation::_initializeImplementation() {
	_setClassHelper(SurveyMissionObjectiveHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void SurveyMissionObjectiveImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<SurveyMissionObjective*>(stub);
	MissionObjectiveImplementation::_setStub(stub);
}

DistributedObjectStub* SurveyMissionObjectiveImplementation::_getStub() {
	return _this;
}

SurveyMissionObjectiveImplementation::operator const SurveyMissionObjective*() {
	return _this;
}

void SurveyMissionObjectiveImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void SurveyMissionObjectiveImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void SurveyMissionObjectiveImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void SurveyMissionObjectiveImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void SurveyMissionObjectiveImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void SurveyMissionObjectiveImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void SurveyMissionObjectiveImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void SurveyMissionObjectiveImplementation::_serializationHelperMethod() {
	MissionObjectiveImplementation::_serializationHelperMethod();

	_setClassName("SurveyMissionObjective");

}

void SurveyMissionObjectiveImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(SurveyMissionObjectiveImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool SurveyMissionObjectiveImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (MissionObjectiveImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "spawnFamily") {
		TypeInfo<String >::parseFromBinaryStream(&spawnFamily, stream);
		return true;
	}

	if (_name == "efficiency") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&efficiency, stream);
		return true;
	}

	if (_name == "missionGiver") {
		TypeInfo<ManagedReference<SceneObject* > >::parseFromBinaryStream(&missionGiver, stream);
		return true;
	}


	return false;
}

void SurveyMissionObjectiveImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SurveyMissionObjectiveImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SurveyMissionObjectiveImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "spawnFamily";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&spawnFamily, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "efficiency";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&efficiency, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "missionGiver";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<SceneObject* > >::toBinaryStream(&missionGiver, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 3 + MissionObjectiveImplementation::writeObjectMembers(stream);
}

SurveyMissionObjectiveImplementation::SurveyMissionObjectiveImplementation(MissionObject* mission) : MissionObjectiveImplementation(mission) {
	_initializeImplementation();
	// server/zone/objects/mission/SurveyMissionObjective.idl():  		Logger.setLoggingName("SurveyMissionObjective");
	Logger::setLoggingName("SurveyMissionObjective");
	// server/zone/objects/mission/SurveyMissionObjective.idl():  		efficiency = 0;
	efficiency = 0;
}

void SurveyMissionObjectiveImplementation::finalize() {
	// server/zone/objects/mission/SurveyMissionObjective.idl():  		Logger.info("deleting from memory", true);
	Logger::info("deleting from memory", true);
}

void SurveyMissionObjectiveImplementation::initializeTransientMembers() {
	// server/zone/objects/mission/SurveyMissionObjective.idl():  		super.initializeTransientMembers();
	MissionObjectiveImplementation::initializeTransientMembers();
	// server/zone/objects/mission/SurveyMissionObjective.idl():  		Logger.setLoggingName("MissionObject");
	Logger::setLoggingName("MissionObject");
}

void SurveyMissionObjectiveImplementation::setSpawnFamily(String& spf) {
	// server/zone/objects/mission/SurveyMissionObjective.idl():  		spawnFamily = spf;
	spawnFamily = spf;
}

void SurveyMissionObjectiveImplementation::setMissionGiver(SceneObject* object) {
	// server/zone/objects/mission/SurveyMissionObjective.idl():  		missionGiver = object;
	missionGiver = object;
}

void SurveyMissionObjectiveImplementation::setEfficiency(unsigned int eff) {
	// server/zone/objects/mission/SurveyMissionObjective.idl():  		efficiency = eff;
	efficiency = eff;
}

/*
 *	SurveyMissionObjectiveAdapter
 */

SurveyMissionObjectiveAdapter::SurveyMissionObjectiveAdapter(SurveyMissionObjective* obj) : MissionObjectiveAdapter(obj) {
}

Packet* SurveyMissionObjectiveAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_FINALIZE__:
		finalize();
		break;
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_ACTIVATE__:
		activate();
		break;
	case RPC_ABORT__:
		abort();
		break;
	case RPC_COMPLETE__:
		complete();
		break;
	case RPC_NOTIFYOBSERVEREVENT__MISSIONOBSERVER_INT_OBSERVABLE_MANAGEDOBJECT_LONG_:
		resp->insertSignedInt(notifyObserverEvent(static_cast<MissionObserver*>(inv->getObjectParameter()), inv->getUnsignedIntParameter(), static_cast<Observable*>(inv->getObjectParameter()), static_cast<ManagedObject*>(inv->getObjectParameter()), inv->getSignedLongParameter()));
		break;
	case RPC_SETSPAWNFAMILY__STRING_:
		setSpawnFamily(inv->getAsciiParameter(_param0_setSpawnFamily__String_));
		break;
	case RPC_SETMISSIONGIVER__SCENEOBJECT_:
		setMissionGiver(static_cast<SceneObject*>(inv->getObjectParameter()));
		break;
	case RPC_SETEFFICIENCY__INT_:
		setEfficiency(inv->getUnsignedIntParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void SurveyMissionObjectiveAdapter::finalize() {
	(static_cast<SurveyMissionObjective*>(stub))->finalize();
}

void SurveyMissionObjectiveAdapter::initializeTransientMembers() {
	(static_cast<SurveyMissionObjective*>(stub))->initializeTransientMembers();
}

void SurveyMissionObjectiveAdapter::activate() {
	(static_cast<SurveyMissionObjective*>(stub))->activate();
}

void SurveyMissionObjectiveAdapter::abort() {
	(static_cast<SurveyMissionObjective*>(stub))->abort();
}

void SurveyMissionObjectiveAdapter::complete() {
	(static_cast<SurveyMissionObjective*>(stub))->complete();
}

int SurveyMissionObjectiveAdapter::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return (static_cast<SurveyMissionObjective*>(stub))->notifyObserverEvent(observer, eventType, observable, arg1, arg2);
}

void SurveyMissionObjectiveAdapter::setSpawnFamily(String& spf) {
	(static_cast<SurveyMissionObjective*>(stub))->setSpawnFamily(spf);
}

void SurveyMissionObjectiveAdapter::setMissionGiver(SceneObject* object) {
	(static_cast<SurveyMissionObjective*>(stub))->setMissionGiver(object);
}

void SurveyMissionObjectiveAdapter::setEfficiency(unsigned int eff) {
	(static_cast<SurveyMissionObjective*>(stub))->setEfficiency(eff);
}

/*
 *	SurveyMissionObjectiveHelper
 */

SurveyMissionObjectiveHelper* SurveyMissionObjectiveHelper::staticInitializer = SurveyMissionObjectiveHelper::instance();

SurveyMissionObjectiveHelper::SurveyMissionObjectiveHelper() {
	className = "SurveyMissionObjective";

	Core::getObjectBroker()->registerClass(className, this);
}

void SurveyMissionObjectiveHelper::finalizeHelper() {
	SurveyMissionObjectiveHelper::finalize();
}

DistributedObject* SurveyMissionObjectiveHelper::instantiateObject() {
	return new SurveyMissionObjective(DummyConstructorParameter::instance());
}

DistributedObjectServant* SurveyMissionObjectiveHelper::instantiateServant() {
	return new SurveyMissionObjectiveImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* SurveyMissionObjectiveHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SurveyMissionObjectiveAdapter(static_cast<SurveyMissionObjective*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

